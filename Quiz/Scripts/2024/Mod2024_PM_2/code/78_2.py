try:
    def f():
        try:
            res = int("0")
        except TypeError: return 2
        except BaseException: return 3
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
