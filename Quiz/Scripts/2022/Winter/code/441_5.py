try:
    
    a,b,c=6,7,9
    def h(a,b=8,c=7):
        print(a,b,c,end="")
    
    h(1,5)
    print(a,b,c)
    
except: print('error')
