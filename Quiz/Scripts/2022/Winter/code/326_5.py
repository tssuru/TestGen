try:
    
    a,b,c=8,6,9
    def h(a,b=7,c=6):
        print(a,b,c,end="")
    
    h(a=1,a=3,c=2)
    print(a,b,c)
    
except: print('error')
