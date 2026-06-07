try:
    def f():
        try:
            res = int(3//2)
            return 44
        except ValueError: return 8
        except BaseException: return 9
        else: return 32
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
