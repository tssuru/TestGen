try:
    def f():
        try:
            res = int(5/0.0)
        except BaseException: return 4
        except Exception: return 1
        else: return 32
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
