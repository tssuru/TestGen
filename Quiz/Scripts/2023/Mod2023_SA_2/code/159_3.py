try:
    def f():
        try:
            res = int("2")
        except BaseException: return 8
        except Exception: return 7
        else: return 34
        return res
    
    print(f())
    
except: print('error')
