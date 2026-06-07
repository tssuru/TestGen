try:
    def f():
        try:
            res = int("b7")
            return 40
        except KeyboardInterrupt: 
            return 4
        except ValueError: 
            return 1
        else: return 33
        return res
    
    print(f())
except: print('error')
