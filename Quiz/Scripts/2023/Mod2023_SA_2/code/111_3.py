try:
    def f():
        try:
            res = int(7//0)
        except KeyboardInterrupt: return 9
        except ZeroDivisionError: return 3
        else: return 32
        return res
    
    print(f())
    
except: print('error')
