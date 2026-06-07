try:
    def f():
        try:
            res = 7>=7
        except KeyboardInterrupt: return 4
        except ValueError: return 0
        else: return 33
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
