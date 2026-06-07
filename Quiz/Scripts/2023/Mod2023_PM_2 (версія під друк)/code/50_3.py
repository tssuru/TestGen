try:
    def f():
        try:
            res = int(6/0.0)
            return 43
        except ValueError: return 0
        except KeyboardInterrupt: return 1
        return res
    
    print(f())
    
except: print('error')
