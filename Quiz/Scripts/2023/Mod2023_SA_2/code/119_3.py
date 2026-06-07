try:
    def f():
        try:
            res = int(8/0.0)
        except Exception: return 3
        except TypeError: return 4
        else: return 30
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
