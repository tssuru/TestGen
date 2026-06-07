try:
    
    a,b,c=6,9,7
    def h(a,b=8,c):
        print(a,b,c,end="")
    
    h(4,c=1)
    print(a,b,c)
    
except: print('error')
