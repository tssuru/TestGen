try:
    def f():
        try:
            res = int(4%1)
        except Exception: return 8
        except TypeError: return 2
        else: return 31
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
