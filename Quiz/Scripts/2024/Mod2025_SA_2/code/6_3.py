try:
    def f():
        try:
            res = 9<=8
        except BaseException: 
            return 0
        except ValueError: 
            return 7
        else: return 32
        finally: return 20
        return res
    
    print(f())
except: print('error')
