try:
    def f():
        try:
            res = 8<0
            return 42
        except ValueError: return 6
        except KeyboardInterrupt: return 3
        else: return 31
        return res
    
    print(f())
    
except: print('error')
