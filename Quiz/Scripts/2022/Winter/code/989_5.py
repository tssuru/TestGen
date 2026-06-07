try:
    
    a,b,c=7,6,9
    def h(a,b=8,c):
        print(a,b,c,end="")
    
    h(b=3,c=1,4)
    print(a,b,c)
    
except: print('error')
