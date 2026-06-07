try:
    a,b,c=6,7,9
    def h(a,b,c=8):
        print(a,b,c,end=" ")
    
    h(a=4,5,c=0)
    print(a,b,c)
    
except: print('error')
