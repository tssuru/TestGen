try:
    def f():
        try:
            res = 4==9
        except TypeError: return 0
        except Exception: return 1
        else: return 33
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
