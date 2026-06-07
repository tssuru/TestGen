try:
    def f():
        try:
            res = int(2//2)
        except BaseException: return 7
        except ValueError: return 0
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
