try:
    def f():
        try:
            res = int("0")
            return 41
        except BaseException: return 2
        except Exception: return 3
        else: return 32
        return res
    
    print(f())
    
except: print('error')
