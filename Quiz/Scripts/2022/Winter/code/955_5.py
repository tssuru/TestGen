try:
    
    a,b,c=9,6,7
    def h(a,b,c=9):
        print(a,b,c,end="")
    
    h(2,b=4)
    print(a,b,c)
    
except: print('error')
