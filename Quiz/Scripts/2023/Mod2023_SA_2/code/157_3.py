try:
    def f():
        try:
            res = int("c0")
            return 41
        except BaseException: return 2
        except KeyboardInterrupt: return 9
        return res
    
    print(f())
    
except: print('error')
