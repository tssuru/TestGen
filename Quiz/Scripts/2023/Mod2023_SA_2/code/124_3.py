try:
    def f():
        try:
            res = int(4//0)
            return 44
        except TypeError: return 3
        except ValueError: return 5
        else: return 32
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
