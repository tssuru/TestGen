try:
    def f():
        try:
            res = int(6%1)
        except TypeError: return 4
        except Exception: return 7
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
