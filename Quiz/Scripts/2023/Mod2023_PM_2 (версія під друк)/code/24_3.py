try:
    def f():
        try:
            res = int(9%1)
        except BaseException: return 1
        except TypeError: return 5
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
