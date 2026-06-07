try:
    def f():
        try:
            res = int(1/2)
            return 40
        except TypeError: return 6
        except KeyboardInterrupt: return 9
        else: return 35
        return res
    
    print(f())
    
except: print('error')
