try:
    def f():
        try:
            res = int("7")
        except TypeError: return 3
        except KeyboardInterrupt: return 4
        else: return 35
        return res
    
    print(f())
    
except: print('error')
