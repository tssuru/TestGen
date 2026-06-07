try:
    def f():
        try:
            res = int(5%2)
            return 43
        except KeyboardInterrupt: return 0
        except ValueError: return 9
        return res
    
    print(f())
    
except: print('error')
