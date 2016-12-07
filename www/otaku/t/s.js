// ensure that DOM is ready
window.onload = function () {

  var container = document.getElementById("grid"),

  getVideoName = function (i) {
    /*
      we do not have 12 videos available
      so repeat videos named night1 thru night6
      fill grid with 6 videos by clamping index count between 0 and 5
    */
    return "night" + (i % 6 + 1);
  },

  getPlaylist = function () {
    var playlist = [], i;

    for (i = 0; i < 12; i += 1) {
      playlist.push({
        sources: [
          { type: "application/x-mpegurl",
            src:  "//stream.flowplayer.org/" + getVideoName(i) + ".m3u8" },
          { type: "video/webm",
            src:  "//stream.flowplayer.org/" + getVideoName(i) + ".webm" },
          { type: "video/mp4",
            src:  "//stream.flowplayer.org/" + getVideoName(i) + ".mp4" },
          { type: "video/flash",
            src:  "mp4:" + getVideoName(i) }
        ]
      });
    }

    return playlist;
  };


  // install the player
  flowplayer(container, {
    playlist: getPlaylist(),
    hlsQualities: [1, 3, 6, 7],
    qualities: ["216p", "360p", "720p", "1080p"],
    defaultQuality: "360p",
    rtmp: "rtmp://s3b78u0kbtx79q.cloudfront.net/cfx/st",
    ratio: 9/16
  });

};
