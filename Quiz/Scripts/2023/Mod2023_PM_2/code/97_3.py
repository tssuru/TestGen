try:
    def f():
        try:
            res = int(8/0.0)
        except BaseException: return 6
        except Exception: return 0
        else: return 35
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
