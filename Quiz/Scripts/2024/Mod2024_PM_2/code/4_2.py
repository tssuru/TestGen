try:
    def f():
        try:
            res = int(6/0.0)
        except KeyboardInterrupt: return 2
        except TypeError: return 0
        else: return 30
        return res
    
    print(f())
    
except: print('error')
