
module.exports = {
  devServer: {
    proxy: {
      '^/api': {
        target: 'http://localhost:500',
        changeOrigin: true,
        logLevel: 'debug',
        pathRewrite: { '^/api': '/' },
      },
    }
  }
}