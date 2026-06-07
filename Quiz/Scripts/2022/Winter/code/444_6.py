try:
    a,b,c=1,3,9
    def h(a):
        a=2
        b-=5
        c=4
        return a+b+c
    
    a,b,c=0,8,6
    print(h(a),a,b,c)
    
except: print('error')
