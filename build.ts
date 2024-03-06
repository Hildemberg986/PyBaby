import { exec } from "child_process";

const platform = require('os').platform();

if (platform === "win32") {
    exec('mingw32-make', () => {
        setTimeout(() => {
          exec('mingw32-make cleanwindows', () => {
            setTimeout(() => {
              exec('cls', () => {
              });
            }, 10);
          });
        }, 10); 
      });
} else if (platform === "linux") {
    exec('make', () => {
        setTimeout(() => {
            exec('make cleanunix', () => {
                exec('clear', () => {
                });
            });
        }, 5000); // 5 segundos de atraso
    });
}