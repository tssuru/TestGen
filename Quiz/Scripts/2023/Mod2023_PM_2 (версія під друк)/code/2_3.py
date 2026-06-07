try:
    def f():
        try:
            res = 0<6
            return 44
        except ZeroDivisionError: return 9
        except KeyboardInterrupt: return 5
        else: return 35
        return res
    
    print(f())
    
except: print('error')
