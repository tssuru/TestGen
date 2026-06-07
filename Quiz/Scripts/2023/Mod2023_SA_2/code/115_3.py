try:
    def f():
        try:
            res = int("a0")
            return 42
        except KeyboardInterrupt: return 8
        except BaseException: return 9
        return res
    
    print(f())
    
except: print('error')
