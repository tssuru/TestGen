try:
    def f():
        try:
            res = int("6")
        except KeyboardInterrupt: return 2
        except BaseException: return 8
        return res
    
    print(f())
    
except: print('error')
