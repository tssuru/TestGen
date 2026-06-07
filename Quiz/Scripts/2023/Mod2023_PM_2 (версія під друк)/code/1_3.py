try:
    def f():
        try:
            res = int(6/0)
        except Exception: return 7
        except TypeError: return 1
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
