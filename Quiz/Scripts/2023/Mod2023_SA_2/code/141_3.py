try:
    def f():
        try:
            res = 0<8
        except BaseException: return 1
        except TypeError: return 9
        else: return 34
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
