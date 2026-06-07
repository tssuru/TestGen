try:
    def f():
        try:
            res = int(6//2)
        except BaseException: return 7
        except Exception: return 0
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
