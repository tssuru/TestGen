try:
    
    a,b,c=8,6,9
    def h(a,b=7,c=6):
        print(a,b,c,end="")
    
    h(2,3,b=1)
    print(a,b,c)
    
except: print('error')
