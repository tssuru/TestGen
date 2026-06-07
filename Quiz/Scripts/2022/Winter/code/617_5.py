try:
    
    a,b,c=8,6,9
    def h(a,b=7,c):
        print(a,b,c,end="")
    
    h(b=4,c=1,3)
    print(a,b,c)
    
except: print('error')
