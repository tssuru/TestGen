try:
    
    a,b,c=7,8,9
    def h(a,b,c=6):
        print(a,b,c,end="")
    
    h(b=2,c=0,5)
    print(a,b,c)
    
except: print('error')
