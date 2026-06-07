try:
    def f():
        try:
            res = int(7//0)
        except KeyboardInterrupt: return 5
        except ValueError: return 6
        else: return 30
        return res
    
    print(f())
    
except: print('error')
