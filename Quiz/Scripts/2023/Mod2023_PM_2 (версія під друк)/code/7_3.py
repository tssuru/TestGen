try:
    def f():
        try:
            res = int("c4")
        except TypeError: return 8
        except BaseException: return 4
        else: return 30
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
