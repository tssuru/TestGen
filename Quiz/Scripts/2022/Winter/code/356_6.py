try:
    a,b,c=4,2,9
    def h(a):
        a=3
        b-=2
        c=5
        return a+b+c
    
    a,b,c=5,5,1
    print(h(a),a,b,c)
    
except: print('error')
