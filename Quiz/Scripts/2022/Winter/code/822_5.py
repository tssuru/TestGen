try:
    
    a,b,c=7,7,9
    def h(a,b=8,c=6):
        print(a,b,c,end="")
    
    h(0,c=1,b=2)
    print(a,b,c)
    
except: print('error')
