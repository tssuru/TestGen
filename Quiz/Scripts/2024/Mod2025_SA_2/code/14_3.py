try:
    def f():
        try:
            res = 8>=5
            return 43
        except KeyboardInterrupt: 
            return 9
        except TypeError: 
            return 8
        else: return 31
        return res
    
    print(f())
except: print('error')
