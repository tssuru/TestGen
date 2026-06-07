try:
    
    a,b,c=6,9,7
    def h(a,b=8,c=6):
        print(a,b,c,end="")
    
    h(2,0,3)
    print(a,b,c)
    
except: print('error')
