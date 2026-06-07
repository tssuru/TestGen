try:
    def f():
        try:
            res = int("a5")
        except KeyboardInterrupt: return 6
        except BaseException: return 9
        return res
    
    print(f())
    
except: print('error')
