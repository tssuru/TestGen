try:
    
    a,b,c=6,7,9
    def h(a,b,c=7):
        print(a,b,c,end="")
    
    h(2,c=1,b=3)
    print(a,b,c)
    
except: print('error')
