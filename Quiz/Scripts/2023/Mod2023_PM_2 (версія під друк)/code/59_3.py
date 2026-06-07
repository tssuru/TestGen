try:
    def f():
        try:
            res = int(1%1)
        except ValueError: return 8
        except BaseException: return 9
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
