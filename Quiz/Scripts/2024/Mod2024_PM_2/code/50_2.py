try:
    def f():
        try:
            res = int("b5")
            return 43
        except Exception: return 1
        except BaseException: return 6
        return res
    
    print(f())
    
except: print('error')
