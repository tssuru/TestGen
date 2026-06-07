try:
    def f():
        try:
            res = int("a0")
        except BaseException: return 4
        except TypeError: return 7
        else: return 34
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
